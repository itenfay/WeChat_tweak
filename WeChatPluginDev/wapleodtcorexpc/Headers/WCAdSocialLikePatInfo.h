//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCAdPagInfo;

@interface WCAdSocialLikePatInfo : NSObject
{
    _Bool _supportDoubleClick;
    NSString *_numberRequestId;
    WCAdPagInfo *_cheerIconPag;
    WCAdPagInfo *_cheerIconPagDark;
    NSArray *_fullScreenPagList;
    double _fullScreenCanCloseDelayTime;
    double _fullScreenVibrateDelayTime;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool supportDoubleClick; // @synthesize supportDoubleClick=_supportDoubleClick;
@property(nonatomic) double fullScreenVibrateDelayTime; // @synthesize fullScreenVibrateDelayTime=_fullScreenVibrateDelayTime;
@property(nonatomic) double fullScreenCanCloseDelayTime; // @synthesize fullScreenCanCloseDelayTime=_fullScreenCanCloseDelayTime;
@property(retain, nonatomic) NSArray *fullScreenPagList; // @synthesize fullScreenPagList=_fullScreenPagList;
@property(retain, nonatomic) WCAdPagInfo *cheerIconPagDark; // @synthesize cheerIconPagDark=_cheerIconPagDark;
@property(retain, nonatomic) WCAdPagInfo *cheerIconPag; // @synthesize cheerIconPag=_cheerIconPag;
@property(retain, nonatomic) NSString *numberRequestId; // @synthesize numberRequestId=_numberRequestId;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

