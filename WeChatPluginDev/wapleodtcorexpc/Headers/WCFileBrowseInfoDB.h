//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase;

@interface WCFileBrowseInfoDB : NSObject
{
    WCTDatabase *_infoDB;
}

+ (_Bool)whetherInfoDBExist;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTDatabase *infoDB; // @synthesize infoDB=_infoDB;
- (void)willRecoverDatabase;
- (void)delFileBrowseInfoWithChatName:(id)arg1;
- (void)delFileBrowseInfoWithMsgID:(unsigned long long)arg1;
- (void)delAllFileBrowseInfo;
- (id)getFileBrowseInfoByMD5:(id)arg1;
- (id)getAllFilesBrowseInfoFilterByUserOpen;
- (id)getAllFilesBrowseInfoFilterByDownloadTypeForChat:(id)arg1;
- (id)getAllFilesBrowseInfoFilterByDownloadType;
- (id)getAllFilesBrowseMD5;
- (id)getAllFilesBrowseInfo;
- (void)markUserOpenByMsgSvrID:(unsigned long long)arg1;
- (void)updateTypeDownloadedForBrowseInfo:(id)arg1;
- (void)addFileBrowseInfo:(id)arg1;
- (void)p_closeDB;
- (void)p_createDataBase;
- (id)p_getBrowseInfoTable;
- (void)dealloc;
- (id)init;

@end

