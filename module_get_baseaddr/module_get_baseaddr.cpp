#include <BPatch.h>
#include <BPatch_addressSpace.h>
#include <BPatch_process.h>

#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
	BPatch bpatch;
	BPatch_process* appProc = bpatch.processCreate("/bin/ls", NULL);
	BPatch_image* img = NULL;
	img = appProc->getImage();
	vector<BPatch_module*> *mdl = img->getModules();
	vector<BPatch_module*>::iterator moduleIter = mdl->begin();
	void* addr = (*moduleIter)->getBaseAddr();
	printf("0x%x\n",addr);
	return 0;
}
