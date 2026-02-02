//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface PBCGIHelperOCWrap : NSObject
{
    struct PBCGIHelperWrap *_pCgi;
}

+ (id)createInstance:(struct PBCGIHelperWrap)arg1;
@property(nonatomic) struct PBCGIHelperWrap *pCgi; // @synthesize pCgi=_pCgi;
- (void)dealloc;

@end

