//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportHTMLActionItem
{
    unsigned int _clientTimestamp;
    unsigned int _publiclibversion;
    NSString *_currentUrl;
    NSString *_referpageurl;
    long long _targetAction;
    NSString *_targetPageUrl;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int publiclibversion; // @synthesize publiclibversion=_publiclibversion;
@property(nonatomic) unsigned int clientTimestamp; // @synthesize clientTimestamp=_clientTimestamp;
@property(retain, nonatomic) NSString *targetPageUrl; // @synthesize targetPageUrl=_targetPageUrl;
@property(nonatomic) long long targetAction; // @synthesize targetAction=_targetAction;
@property(retain, nonatomic) NSString *referpageurl; // @synthesize referpageurl=_referpageurl;
@property(retain, nonatomic) NSString *currentUrl; // @synthesize currentUrl=_currentUrl;
- (id)reportString;
- (int)reportID;

@end

