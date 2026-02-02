//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MSETransmitFileData
{
    NSString *_filePath;
    long long _fileSize;
    NSString *_title;
}

+ (void)initialize;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_filePath;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

