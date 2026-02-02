//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMusicMVModel, NSString;
@protocol MMMusicDotMVDataSourceDelegate;

@interface MMMusicDotMVDataSource : NSObject
{
    _Bool _isChatroomEnabled;
    int _currDotIndex;
    unsigned int _canCreateMVBitFlag;
    unsigned int _durationInMs;
    unsigned int _currTimeMs;
    id <MMMusicDotMVDataSourceDelegate> _delegate;
    MMMusicMVModel *_mvModel;
    NSString *_statusVerifyInfo;
    NSString *_songId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int currTimeMs; // @synthesize currTimeMs=_currTimeMs;
@property(nonatomic) unsigned int durationInMs; // @synthesize durationInMs=_durationInMs;
@property(retain, nonatomic) NSString *songId; // @synthesize songId=_songId;
@property(retain, nonatomic) NSString *statusVerifyInfo; // @synthesize statusVerifyInfo=_statusVerifyInfo;
@property(nonatomic) _Bool isChatroomEnabled; // @synthesize isChatroomEnabled=_isChatroomEnabled;
@property(nonatomic) unsigned int canCreateMVBitFlag; // @synthesize canCreateMVBitFlag=_canCreateMVBitFlag;
@property(nonatomic) int currDotIndex; // @synthesize currDotIndex=_currDotIndex;
@property(retain, nonatomic) MMMusicMVModel *mvModel; // @synthesize mvModel=_mvModel;
@property(nonatomic) __weak id <MMMusicDotMVDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool canCreateMV;
@property(readonly, nonatomic) _Bool isCurrentAccountBlocked;
- (unsigned int)getCurrIndexFromCurrPlayTime:(unsigned int)arg1;
- (unsigned int)getCurrPlayedTimeMs;
- (void)updateCurrPlayedTime:(unsigned int)arg1;
- (void)updateTimeInfo:(id)arg1 arrFlexBasicClipTrack:(id)arg2;
- (void)updateWithMVModel:(id)arg1;
- (id)initWithMVModel:(id)arg1;

@end

