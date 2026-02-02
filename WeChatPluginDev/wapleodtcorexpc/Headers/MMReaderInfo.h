//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ReaderWrapNotifyMsg;

@interface MMReaderInfo : NSObject
{
    ReaderWrapNotifyMsg *_notifyMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ReaderWrapNotifyMsg *notifyMsg; // @synthesize notifyMsg=_notifyMsg;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

