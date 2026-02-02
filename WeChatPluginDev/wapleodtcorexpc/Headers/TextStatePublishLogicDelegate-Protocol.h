//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TextStateModel;

@protocol TextStatePublishLogicDelegate <NSObject>
- (_Bool)shouldModifySelfContact;
- (void)onTextState:(TextStateModel *)arg1 publishSuccess:(_Bool)arg2;
- (void)onTextStateDeleteFromPublishingQueue:(TextStateModel *)arg1;
- (void)onTextStateSubmitToPublish:(TextStateModel *)arg1;
@end

