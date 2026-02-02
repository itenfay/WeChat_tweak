//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMMusicShareItem : NSObject
{
    unsigned int _musicDuration;
    NSString *_mvObjectId;
    NSString *_mvNonceId;
    NSString *_mvCoverUrl;
    NSString *_mvMakerFinderNickname;
    NSString *_mvMakerFinderUsername;
    NSString *_mvSingerName;
    NSString *_mvAlbumName;
    NSString *_mvMusicGenre;
    NSString *_mvIdentification;
    unsigned long long _mvIssueDate;
    NSString *_mvExtInfo;
    NSString *_mvOperationUrl;
    NSString *_mid;
    NSString *_appIdForSourceDisplay;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_appIdForSourceDisplay;
+ (void)PBArrayAdd_mid;
+ (void)PBArrayAdd_mvOperationUrl;
+ (void)PBArrayAdd_mvMakerFinderUsername;
+ (void)PBArrayAdd_musicDuration;
+ (void)PBArrayAdd_mvExtInfo;
+ (void)PBArrayAdd_mvIdentification;
+ (void)PBArrayAdd_mvIssueDate;
+ (void)PBArrayAdd_mvMusicGenre;
+ (void)PBArrayAdd_mvAlbumName;
+ (void)PBArrayAdd_mvSingerName;
+ (void)PBArrayAdd_mvMakerFinderNickname;
+ (void)PBArrayAdd_mvCoverUrl;
+ (void)PBArrayAdd_mvNonceId;
+ (void)PBArrayAdd_mvObjectId;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appIdForSourceDisplay; // @synthesize appIdForSourceDisplay=_appIdForSourceDisplay;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(retain, nonatomic) NSString *mvOperationUrl; // @synthesize mvOperationUrl=_mvOperationUrl;
@property(nonatomic) unsigned int musicDuration; // @synthesize musicDuration=_musicDuration;
@property(retain, nonatomic) NSString *mvExtInfo; // @synthesize mvExtInfo=_mvExtInfo;
@property(nonatomic) unsigned long long mvIssueDate; // @synthesize mvIssueDate=_mvIssueDate;
@property(retain, nonatomic) NSString *mvIdentification; // @synthesize mvIdentification=_mvIdentification;
@property(retain, nonatomic) NSString *mvMusicGenre; // @synthesize mvMusicGenre=_mvMusicGenre;
@property(retain, nonatomic) NSString *mvAlbumName; // @synthesize mvAlbumName=_mvAlbumName;
@property(retain, nonatomic) NSString *mvSingerName; // @synthesize mvSingerName=_mvSingerName;
@property(retain, nonatomic) NSString *mvMakerFinderUsername; // @synthesize mvMakerFinderUsername=_mvMakerFinderUsername;
@property(retain, nonatomic) NSString *mvMakerFinderNickname; // @synthesize mvMakerFinderNickname=_mvMakerFinderNickname;
@property(retain, nonatomic) NSString *mvCoverUrl; // @synthesize mvCoverUrl=_mvCoverUrl;
@property(retain, nonatomic) NSString *mvNonceId; // @synthesize mvNonceId=_mvNonceId;
@property(retain, nonatomic) NSString *mvObjectId; // @synthesize mvObjectId=_mvObjectId;
@property(readonly, copy) NSString *description;
- (void)clearMvInfo;
- (_Bool)isValidMvItem;
- (id)toXML;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

