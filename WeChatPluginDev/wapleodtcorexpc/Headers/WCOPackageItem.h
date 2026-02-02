//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCOPackageItem : NSObject
{
    unsigned int _flag;
    NSString *_ProductID;
    NSString *_Title;
    NSString *_Price;
    NSString *_Wording;
    NSString *_Desc;
    NSString *_CountryFlagImgUrl;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSString *CountryFlagImgUrl; // @synthesize CountryFlagImgUrl=_CountryFlagImgUrl;
@property(retain, nonatomic) NSString *Desc; // @synthesize Desc=_Desc;
@property(retain, nonatomic) NSString *Wording; // @synthesize Wording=_Wording;
@property(retain, nonatomic) NSString *Price; // @synthesize Price=_Price;
@property(retain, nonatomic) NSString *Title; // @synthesize Title=_Title;
@property(retain, nonatomic) NSString *ProductID; // @synthesize ProductID=_ProductID;

@end

