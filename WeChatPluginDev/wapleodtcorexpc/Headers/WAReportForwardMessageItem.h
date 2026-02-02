//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportForwardMessageItem
{
    unsigned int _destinationType;
    NSString *_currentTitle;
    NSString *_sharePath;
    NSString *_shareTitle;
    NSString *_shareId;
    long long _userCount;
    NSString *_userName;
    NSString *_webViewUrl;
    NSString *_imageURL;
    NSString *_messageExtraData;
    long long _shareActionType;
    long long _shareSourceType;
}

- (void).cxx_destruct;
@property(nonatomic) long long shareSourceType; // @synthesize shareSourceType=_shareSourceType;
@property(nonatomic) long long shareActionType; // @synthesize shareActionType=_shareActionType;
@property(copy, nonatomic) NSString *messageExtraData; // @synthesize messageExtraData=_messageExtraData;
@property(nonatomic) unsigned int destinationType; // @synthesize destinationType=_destinationType;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *webViewUrl; // @synthesize webViewUrl=_webViewUrl;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) long long userCount; // @synthesize userCount=_userCount;
@property(copy, nonatomic) NSString *shareId; // @synthesize shareId=_shareId;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(copy, nonatomic) NSString *sharePath; // @synthesize sharePath=_sharePath;
@property(copy, nonatomic) NSString *currentTitle; // @synthesize currentTitle=_currentTitle;
- (id)reportString;

@end

