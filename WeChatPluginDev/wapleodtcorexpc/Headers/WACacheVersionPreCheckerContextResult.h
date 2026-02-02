//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WACacheVersionPreCheckerContextResult : NSObject
{
    _Bool _hasResult;
    _Bool _checkSuccess;
    long long _errCode;
    NSString *_errMsg;
    NSMutableArray *_needDownloadInfoDatas;
    NSMutableArray *_downloadSuccessInfoDatas;
    NSMutableArray *_checkPassInfoDatas;
    NSMutableArray *_checkFailedInfoDatas;
    NSMutableArray *_pluginInfoDatas;
    NSMutableArray *_checkAutoUpdateInfoDatas;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *checkAutoUpdateInfoDatas; // @synthesize checkAutoUpdateInfoDatas=_checkAutoUpdateInfoDatas;
@property(retain, nonatomic) NSMutableArray *pluginInfoDatas; // @synthesize pluginInfoDatas=_pluginInfoDatas;
@property(retain, nonatomic) NSMutableArray *checkFailedInfoDatas; // @synthesize checkFailedInfoDatas=_checkFailedInfoDatas;
@property(retain, nonatomic) NSMutableArray *checkPassInfoDatas; // @synthesize checkPassInfoDatas=_checkPassInfoDatas;
@property(retain, nonatomic) NSMutableArray *downloadSuccessInfoDatas; // @synthesize downloadSuccessInfoDatas=_downloadSuccessInfoDatas;
@property(retain, nonatomic) NSMutableArray *needDownloadInfoDatas; // @synthesize needDownloadInfoDatas=_needDownloadInfoDatas;
@property(copy, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) long long errCode; // @synthesize errCode=_errCode;
@property(nonatomic) _Bool checkSuccess; // @synthesize checkSuccess=_checkSuccess;
@property(nonatomic) _Bool hasResult; // @synthesize hasResult=_hasResult;

@end

