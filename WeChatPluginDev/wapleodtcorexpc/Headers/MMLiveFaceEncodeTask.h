//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveFaceEncodeTask : NSObject
{
    char *_alphaBuffer;
    struct CGSize _alphaTexSize;
}

+ (void)clearEncodeStreamBuffer;
+ (id)encode:(id)arg1;
+ (_Bool)checkParamValidForAlphaBuffer:(char *)arg1 alphaTexSize:(struct CGSize)arg2;
@property(nonatomic) struct CGSize alphaTexSize; // @synthesize alphaTexSize=_alphaTexSize;
@property(nonatomic) char *alphaBuffer; // @synthesize alphaBuffer=_alphaBuffer;
- (void)dealloc;
- (id)initWithAlphaBuffer:(char *)arg1 alphaTexSize:(struct CGSize)arg2;

@end

