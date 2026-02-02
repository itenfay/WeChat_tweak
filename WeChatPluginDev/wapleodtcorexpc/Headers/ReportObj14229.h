//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ReportObj14229 : NSObject
{
    _Bool _isRange;
    int _errorCode;
    int _optType;
    int _costTime;
    int _fileSize;
    NSString *_pkgId;
    NSString *_pkgVersion;
    NSDictionary *_extInfo;
    NSString *_localVersion;
}

+ (id)createFromDownloadInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) int costTime; // @synthesize costTime=_costTime;
@property(nonatomic) int optType; // @synthesize optType=_optType;
@property(retain, nonatomic) NSString *localVersion; // @synthesize localVersion=_localVersion;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool isRange; // @synthesize isRange=_isRange;
@property(retain, nonatomic) NSString *pkgVersion; // @synthesize pkgVersion=_pkgVersion;
@property(retain, nonatomic) NSString *pkgId; // @synthesize pkgId=_pkgId;
- (id)toLogExt;
- (id)init;

@end

