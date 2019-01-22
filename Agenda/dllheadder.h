#ifndef dllheadder_H
#define dllheadder_H
#define DllExport   __declspec( dllexport )
namespace dllspec{
class dllclass{
public:
    static DllExport float dlladd(float a, float b);
    static DllExport float dllsub (float a, float b);




};


}
#endif // dllheadder_H
