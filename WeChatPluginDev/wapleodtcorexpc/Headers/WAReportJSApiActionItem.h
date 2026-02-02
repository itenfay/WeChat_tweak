//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportJSApiActionItem
{
    _Bool _shouldRoute13542To27220;
    int _result;
    int _permissionValue;
    int _errorcode;
    NSString *_funcName;
    NSString *_keyParam;
    unsigned long long _costtime;
    NSString *_errMsg;
    NSString *_keyResult;
    NSString *_keyRequest;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldRoute13542To27220; // @synthesize shouldRoute13542To27220=_shouldRoute13542To27220;
@property(retain, nonatomic) NSString *keyRequest; // @synthesize keyRequest=_keyRequest;
@property(retain, nonatomic) NSString *keyResult; // @synthesize keyResult=_keyResult;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) unsigned long long costtime; // @synthesize costtime=_costtime;
@property(nonatomic) int errorcode; // @synthesize errorcode=_errorcode;
@property(nonatomic) int permissionValue; // @synthesize permissionValue=_permissionValue;
@property(nonatomic) int result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *keyParam; // @synthesize keyParam=_keyParam;
@property(retain, nonatomic) NSString *funcName; // @synthesize funcName=_funcName;
- (_Bool)isKeyJSApi;
- (id)reportString;

@end

