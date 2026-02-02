//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@protocol OSLogEntryFromProcess
@property(readonly, nonatomic) unsigned long long threadIdentifier;
@property(readonly, nonatomic) NSString *sender;
@property(readonly, nonatomic) int processIdentifier;
@property(readonly, nonatomic) NSString *process;
@property(readonly, nonatomic) unsigned long long activityIdentifier;
@end

