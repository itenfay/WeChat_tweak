//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, SolitaireInfoObj, SolitaireObj;

@protocol SolitaireAnalysiserDelegate <NSObject>
- (_Bool)onAnalysisSolitaireInfoObj:(SolitaireInfoObj *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (SolitaireObj *)getSolitaireWithMessageWrap:(CMessageWrap *)arg1;
@end

