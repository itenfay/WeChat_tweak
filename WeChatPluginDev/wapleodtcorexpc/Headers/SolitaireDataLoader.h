//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface SolitaireDataLoader : NSObject
{
}

+ (_Bool)SyncSessionHandlerToLocalFile:(id)arg1;
+ (id)LoadSessionHandlerWithChatName:(id)arg1;
+ (id)GetSolitaireCacheDir;
+ (id)getSolitaireDBPath;
+ (id)getSolitairePathWithChatName:(id)arg1;
+ (id)hashNameForString:(id)arg1;

@end

