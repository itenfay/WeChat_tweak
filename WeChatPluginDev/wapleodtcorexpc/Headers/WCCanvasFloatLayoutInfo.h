//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCCanvasFloatLayoutInfo
{
    _Bool _autoShow;
    _Bool _noAnimation;
    _Bool _forbiddenToClose;
    _Bool _noBackground;
}

@property(nonatomic) _Bool noBackground; // @synthesize noBackground=_noBackground;
@property(nonatomic) _Bool forbiddenToClose; // @synthesize forbiddenToClose=_forbiddenToClose;
@property(nonatomic) _Bool noAnimation; // @synthesize noAnimation=_noAnimation;
@property(nonatomic) _Bool autoShow; // @synthesize autoShow=_autoShow;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

