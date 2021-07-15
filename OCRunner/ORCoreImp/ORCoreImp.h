//
//  ORImp.h
//  OCRunner
//
//  Created by Jiang on 2020/6/8.
//  Copyright © 2020 SilverFruity. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MFBlock.h"
#import "ORCoreFunction.h"
@class MFValue;
#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

extern void blockInter(ffi_cif *cfi,void *ret,void **args, void*userdata);
extern void methodIMP(ffi_cif *cfi,void *ret,void **args, void*userdata);
extern void getterImp(ffi_cif *cfi,void *ret,void **args, void*userdata);
extern void setterImp(ffi_cif *cfi,void *ret,void **args, void*userdata);
extern MFValue *invoke_sueper_values(id instance, SEL sel, NSArray<MFValue *> *argValues);

#ifdef __cplusplus
}
#endif //__cplusplus
