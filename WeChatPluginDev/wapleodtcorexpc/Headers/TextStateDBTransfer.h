//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol TextStateDBTransferDelegate;

@interface TextStateDBTransfer : NSObject
{
    _Bool _affTransferStatusMainDBFlag;
    _Bool _affTransferStatusCommentDBFlag;
    _Bool _affStatusIsFinish;
    _Bool _affMainStatusDBFusing;
    _Bool _affMessageDBFusing;
    unsigned int _affStatusMainTransferRetryNum;
    unsigned int _affStatusMessageTransferRetryNum;
    id <TextStateDBTransferDelegate> _delegate;
}

+ (void)debugToast:(id)arg1;
+ (void)clearCacheForDebug;
+ (_Bool)useAffDBTransfer;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property unsigned int affStatusMessageTransferRetryNum; // @synthesize affStatusMessageTransferRetryNum=_affStatusMessageTransferRetryNum;
@property unsigned int affStatusMainTransferRetryNum; // @synthesize affStatusMainTransferRetryNum=_affStatusMainTransferRetryNum;
@property _Bool affMessageDBFusing; // @synthesize affMessageDBFusing=_affMessageDBFusing;
@property _Bool affMainStatusDBFusing; // @synthesize affMainStatusDBFusing=_affMainStatusDBFusing;
@property _Bool affStatusIsFinish; // @synthesize affStatusIsFinish=_affStatusIsFinish;
@property _Bool affTransferStatusCommentDBFlag; // @synthesize affTransferStatusCommentDBFlag=_affTransferStatusCommentDBFlag;
@property _Bool affTransferStatusMainDBFlag; // @synthesize affTransferStatusMainDBFlag=_affTransferStatusMainDBFlag;
@property(nonatomic) __weak id <TextStateDBTransferDelegate> delegate; // @synthesize delegate=_delegate;
- (void)debugDBStateToast;
- (void)reportDBStateForDaily;
- (void)transferCommentDataToAffDB;
- (void)dealSelfLike;
- (void)dealSelfState;
- (void)checkTransferAllFinish;
- (id)getPlatformDBData;
- (void)transferPlatformDataToAffDB;
- (_Bool)hasFinishAffDBTransfer;
- (_Bool)hasFinishTransferAffCommentDB;
- (_Bool)hasFinishTransferAffMainStatusDB;
- (id)init;

@end

