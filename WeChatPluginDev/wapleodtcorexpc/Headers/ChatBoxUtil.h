//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface ChatBoxUtil : NSObject
{
}

+ (_Bool)isChatBox:(id)arg1;
+ (void)pushChatBoxListFrom:(id)arg1 complete:(CDUnknownBlockType)arg2;

@end
