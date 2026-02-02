//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCFinderGeneralExtConfigModel;

@interface WCFinderGeneralJumpToastConfig : NSObject
{
    NSString *_msg;
    NSString *_cancel;
    NSString *_confirm;
    WCFinderGeneralExtConfigModel *_extConfig;
    NSArray *_buttonArray;
    NSArray *_buttonContentArray;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *buttonContentArray; // @synthesize buttonContentArray=_buttonContentArray;
@property(retain, nonatomic) NSArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) WCFinderGeneralExtConfigModel *extConfig; // @synthesize extConfig=_extConfig;
@property(copy, nonatomic) NSString *confirm; // @synthesize confirm=_confirm;
@property(copy, nonatomic) NSString *cancel; // @synthesize cancel=_cancel;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;

@end

