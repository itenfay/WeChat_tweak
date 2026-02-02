//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCOutCountryCodeWrap : NSObject
{
    unsigned int _m_uiCountryNamesChineseStrokesCount;
    NSString *_m_nsCountryName;
    NSString *_m_nsCountryNamePinYin;
    NSString *_m_nsCountryCode;
    NSString *_m_nsISOCountryCodes;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiCountryNamesChineseStrokesCount; // @synthesize m_uiCountryNamesChineseStrokesCount=_m_uiCountryNamesChineseStrokesCount;
@property(retain, nonatomic) NSString *m_nsISOCountryCodes; // @synthesize m_nsISOCountryCodes=_m_nsISOCountryCodes;
@property(retain, nonatomic) NSString *m_nsCountryCode; // @synthesize m_nsCountryCode=_m_nsCountryCode;
@property(retain, nonatomic) NSString *m_nsCountryNamePinYin; // @synthesize m_nsCountryNamePinYin=_m_nsCountryNamePinYin;
@property(retain, nonatomic) NSString *m_nsCountryName; // @synthesize m_nsCountryName=_m_nsCountryName;
- (long long)compare:(id)arg1;
- (id)description;

@end

