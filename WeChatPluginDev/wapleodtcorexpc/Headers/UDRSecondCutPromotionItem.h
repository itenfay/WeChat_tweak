//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface UDRSecondCutPromotionItem : NSObject
{
    NSString *_iconPath;
    NSString *_text_zh_Hans;
    NSString *_text_zh_Hant;
    NSString *_text_en;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *text_en; // @synthesize text_en=_text_en;
@property(retain, nonatomic) NSString *text_zh_Hant; // @synthesize text_zh_Hant=_text_zh_Hant;
@property(retain, nonatomic) NSString *text_zh_Hans; // @synthesize text_zh_Hans=_text_zh_Hans;
@property(retain, nonatomic) NSString *iconPath; // @synthesize iconPath=_iconPath;
@property(readonly, nonatomic) NSString *text;
- (id)initWithJSONString:(id)arg1;

@end

