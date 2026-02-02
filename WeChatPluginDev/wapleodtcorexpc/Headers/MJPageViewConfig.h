//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJPageViewConfig : NSObject
{
    _Bool _bScrollEnable;
}

+ (id)commonConfig;
@property(nonatomic) _Bool bScrollEnable; // @synthesize bScrollEnable=_bScrollEnable;
- (id)initWithScrollEnable:(_Bool)arg1;

@end

