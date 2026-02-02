//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderGroupLiveChatSaveToLocalConfig;

@protocol WCFinderGroupLiveSaveToLocalProtocol <NSObject>
- (void)setupFilePath:(NSString *)arg1;
- (_Bool)finishSaveAndUpdateTag:(WCFinderGroupLiveChatSaveToLocalConfig *)arg1;
- (void)clear:(WCFinderGroupLiveChatSaveToLocalConfig *)arg1;
- (id)loadWithFilePath:(WCFinderGroupLiveChatSaveToLocalConfig *)arg1;
- (_Bool)save:(id)arg1 filePath:(WCFinderGroupLiveChatSaveToLocalConfig *)arg2;
@end

