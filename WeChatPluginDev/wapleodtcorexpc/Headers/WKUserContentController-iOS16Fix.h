//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <WebKit/WKUserContentController.h>

@interface WKUserContentController (iOS16Fix)
+ (void)cleanAtomStringTable;
+ (void)setFixIOS16Enable:(_Bool)arg1;
+ (void)removeAtomString:(id)arg1;
+ (struct HashTable *)atomStringTable;
+ (struct HashTable *)atomStringHashTableWith:(unsigned long long)arg1 offset:(int)arg2 arch:(long long)arg3;
+ (_Bool)iOS16FixEnable;
+ (void)load;
- (void)mm_removeScriptMessageHandlerForName:(id)arg1;
- (void)mm_addScriptMessageHandlerWithReply:(id)arg1 contentWorld:(id)arg2 name:(id)arg3;
- (void)mm_addScriptMessageHandler:(id)arg1 name:(id)arg2;
@end

