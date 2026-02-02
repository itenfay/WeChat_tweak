//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol EmoticonRecover <NSObject>
- (_Bool)isRecoveringStatusSafeForOperation;
- (_Bool)isRecoveringEmoticonComplete;
- (_Bool)isRecoveringEmoticon;
- (void)setNeedsRecoverAndNeedClearData:(_Bool)arg1;
- (void)tryRecoverAnotherPart;
- (void)recoverEmoticonFromManageView;
- (void)checkRecoverEmoticonFromServer;
- (_Bool)recoverEmoticonFromServer;
@end

