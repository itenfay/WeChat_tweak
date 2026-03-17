//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPMetalColorHelper : NSObject
{
    void *_coversionMat;
    float _yuvMat[4][4];
    float _yuvFlatMat[16];
}

- (void)uploadYuvMatToFragment:(id)arg1 atIndex:(int)arg2;
- (void)updateColorParmeter:(struct TPFrame *)arg1;
- (void)dealloc;
- (id)init;

@end

