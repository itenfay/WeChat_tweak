//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCTSettingModel : NSObject
{
    _Bool _showArrow;
    NSString *_subTitle;
}

+ (id)createWithTitle:(id)arg1 subTitle:(id)arg2 showArrow:(_Bool)arg3;
+ (id)createWithTitle:(id)arg1 subTitle:(id)arg2;
@property(nonatomic) _Bool showArrow; // @synthesize showArrow=_showArrow;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
- (id)init;

@end

