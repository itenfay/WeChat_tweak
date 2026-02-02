//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMMsgReferUtil : NSObject
{
}

+ (_Bool)IsOpenRefer:(id)arg1;
+ (void)ReportMsg:(id)arg1 action:(unsigned int)arg2 scene:(unsigned int)arg3;
+ (void)ReportFavReferMsgItem:(id)arg1 action:(unsigned int)arg2;
+ (void)ReportMsg:(id)arg1 action:(unsigned int)arg2;
+ (void)ReportClickReferMsg:(id)arg1 chatName:(id)arg2 hasLocalMsg:(_Bool)arg3;
+ (void)ReportSendReferMsg:(id)arg1 chatName:(id)arg2;
+ (unsigned int)GetReportMsgType:(id)arg1;

@end

