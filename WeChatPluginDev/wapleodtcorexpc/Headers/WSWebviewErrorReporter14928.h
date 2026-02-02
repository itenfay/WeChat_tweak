//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WSWebviewErrorReporter14928
{
    _Bool _useReusePool;
    _Bool _isWebviewOnForeground;
    unsigned int _scene;
    unsigned int _h5version;
    unsigned long long _errorType;
    long long _errorCode;
    NSString *_errorMsg;
    unsigned long long _timeStamp;
    NSString *_webviewID;
    unsigned long long _evaluateJSTimes;
    NSString *_lastEvaluateJSString;
    unsigned long long _survivalTime;
    NSString *_baseLoadURLString;
    unsigned long long _stayInReuablePoolTime;
    NSString *_topViewControllerName;
    unsigned long long _bizType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isWebviewOnForeground; // @synthesize isWebviewOnForeground=_isWebviewOnForeground;
@property(nonatomic) unsigned long long bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *topViewControllerName; // @synthesize topViewControllerName=_topViewControllerName;
@property(nonatomic) unsigned long long stayInReuablePoolTime; // @synthesize stayInReuablePoolTime=_stayInReuablePoolTime;
@property(nonatomic) _Bool useReusePool; // @synthesize useReusePool=_useReusePool;
@property(copy, nonatomic) NSString *baseLoadURLString; // @synthesize baseLoadURLString=_baseLoadURLString;
@property(nonatomic) unsigned long long survivalTime; // @synthesize survivalTime=_survivalTime;
@property(copy, nonatomic) NSString *lastEvaluateJSString; // @synthesize lastEvaluateJSString=_lastEvaluateJSString;
@property(nonatomic) unsigned long long evaluateJSTimes; // @synthesize evaluateJSTimes=_evaluateJSTimes;
@property(copy, nonatomic) NSString *webviewID; // @synthesize webviewID=_webviewID;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned int h5version; // @synthesize h5version=_h5version;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long errorType; // @synthesize errorType=_errorType;
- (void)doReport;
- (void)getInfoFrom:(id)arg1;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportNSStringPreprocessType;
- (unsigned int)reportKvId;
- (id)init;

@end

