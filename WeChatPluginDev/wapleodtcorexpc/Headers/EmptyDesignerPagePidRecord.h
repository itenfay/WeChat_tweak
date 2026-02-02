//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString;

@interface EmptyDesignerPagePidRecord
{
    NSMutableSet *_recordSet;
}

+ (id)getSavePath;
+ (id)getSaveRootDir;
+ (void)initialize;
+ (void)PBArrayAdd_recordSet;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *recordSet; // @synthesize recordSet=_recordSet;
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

