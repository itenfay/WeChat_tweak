//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSString;

@protocol WCMallCandidateTelephoneViewDelegate <NSObject>
- (NSString *)GetCandidateTelephoneEnsureTip;
- (NSString *)GetCandidateTelephoneDescription:(unsigned int)arg1 DifferentIndex:(NSMutableArray *)arg2;
- (unsigned int)GetNumberOfCandidateTelephoneListCount;
- (void)OnClickWCMallCandidateTelephoneEnsureCellClicked;
- (void)OnClickWCMallCandidateTelephoneCell:(unsigned int)arg1;
@end

