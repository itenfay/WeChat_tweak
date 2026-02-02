//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface EmoticonSendRecordList
{
    NSMutableArray *_md5List;
}

+ (id)getEmoticonSendRecordListPath;
+ (id)getEmoticonRecordRootDir;
+ (void)RemoveEmoticonSendRecordList;
+ (_Bool)IsEmoticonSendRecordListExist;
+ (id)GetEmoticonRecentSendList;
+ (void)initialize;
+ (void)PBArrayAdd_md5List;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *md5List; // @synthesize md5List=_md5List;
- (void)saveToFile;
- (id)allRecentSendMd5sInOrder;
- (_Bool)isMd5InList:(id)arg1;
- (void)delAllMd5;
- (void)delMd5:(id)arg1;
- (void)addMd5:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

