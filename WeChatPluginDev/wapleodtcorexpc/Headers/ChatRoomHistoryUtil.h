//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ChatRoomHistoryUtil : NSObject
{
}

+ (id)GetInviteAddMsgDataFilePath;
+ (id)GetHistoryMsgDBPath;
+ (id)GetHistoryMsgDBConfigPath;
+ (id)PathForHistoryRecord:(id)arg1;
+ (id)TmpPathForHistoryRecord:(id)arg1;
+ (id)PathForUploadRecordMsg:(id)arg1;
+ (id)TmpPathForUploadRecordMsg;
+ (id)RecordMsgFromData:(id)arg1;
+ (id)DataFromRecordMsg:(id)arg1;

@end

