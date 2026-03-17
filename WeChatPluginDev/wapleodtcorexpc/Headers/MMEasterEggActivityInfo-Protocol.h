//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class InteractiveImplicitView, NSString;

@protocol MMEasterEggActivityInfo <NSObject>
+ (NSString *)activityNodeName;
- (NSString *)accessibilityLabel;
- (InteractiveImplicitView *)interactiveImplicitView;
- (void)asyncPrepareInteractiveImplicitViewWithCompletionHandler:(void (^)(void))arg1;
- (_Bool)supportInteractiveImplicitView;
- (_Bool)isValid;
- (id)initWithActivityNode:(struct XmlReaderNode_t *)arg1 directoryPath:(NSString *)arg2 clientEggVersion:(unsigned long long)arg3;
- (Class)activityClass;
- (NSString *)appId;
@end

