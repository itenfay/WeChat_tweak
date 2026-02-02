//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMLiveEntranceExposeReportHandler
{
    unsigned int scene;
    unsigned int redDot;
    unsigned int roomRole;
    NSString *roomId;
}

+ (void)initialize;
+ (void)MMLiveReportFieldAdd_roomRole;
+ (void)MMLiveReportFieldAdd_redDot;
+ (void)MMLiveReportFieldAdd_roomId;
+ (void)MMLiveReportFieldAdd_scene;
- (void).cxx_destruct;
@property(nonatomic) unsigned int roomRole; // @synthesize roomRole;
@property(nonatomic) unsigned int redDot; // @synthesize redDot;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId;
@property(nonatomic) unsigned int scene; // @synthesize scene;
- (void)onGroupLiveEntranceExposed:(long long)arg1 contact:(id)arg2;
- (id)init;
- (void)report;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

