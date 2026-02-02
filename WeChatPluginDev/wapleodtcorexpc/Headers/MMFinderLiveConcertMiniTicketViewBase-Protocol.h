//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ConcertTicketInfo, MMFinderLiveConcertMiniatureTicketViewReportContext;

@protocol MMFinderLiveConcertMiniTicketViewBase <NSObject>
@property(copy, nonatomic) CDUnknownBlockType closeButtonTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType getTicketButtonTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType readyForDisplayBlock;
- (void)updateWithTicketModel:(ConcertTicketInfo *)arg1 reportContext:(MMFinderLiveConcertMiniatureTicketViewReportContext *)arg2;
@end

