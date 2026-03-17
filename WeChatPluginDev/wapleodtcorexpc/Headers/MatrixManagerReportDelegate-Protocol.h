//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MatrixManagerReportDelegate <NSObject>
- (NSString *)onGetReportCryptKeyWithVersion:(unsigned int)arg1 withDataSize:(unsigned int)arg2;
- (NSString *)onGetMatrixReportURL;
- (NSString *)onGetMatrixReportHost;
- (NSString *)onGetMatrixReportUserName;
- (unsigned int)onGetMatrixReportProductID;
- (unsigned int)onGetMatrixReportUin;
- (unsigned int)onGetMatrixReportVersion;
@end

