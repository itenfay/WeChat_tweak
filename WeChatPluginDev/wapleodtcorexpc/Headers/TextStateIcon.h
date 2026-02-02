//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface TextStateIcon : NSObject
{
    unsigned int _type;
    unsigned int _showType;
    NSString *_iconId;
    unsigned long long _flags;
    NSString *_customIconDescription;
    NSMutableArray *_candidateAppearances;
}

+ (void)initialize;
+ (void)PBArrayAdd_flags;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_candidateAppearances;
+ (void)PBArrayAdd_showType;
+ (void)PBArrayAdd_iconId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *candidateAppearances; // @synthesize candidateAppearances=_candidateAppearances;
@property(retain, nonatomic) NSString *customIconDescription; // @synthesize customIconDescription=_customIconDescription;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(nonatomic) unsigned int showType; // @synthesize showType=_showType;
@property(retain, nonatomic) NSString *iconId; // @synthesize iconId=_iconId;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (_Bool)isCustom;
- (id)unreadTextColor;
- (id)bigImageURLString;
- (id)imageURLString;
- (_Bool)useOriginImage;
- (id)otherClusterDescription;
- (id)withMeClusterDescription;
- (id)selfStatusDescription;
- (id)clusterDescription;
- (id)iconDescription;
- (_Bool)isValidForPublish;
- (_Bool)isValidForShow;
- (void)clearCachedDescription;
- (id)appearance;
- (id)winnerAppearance;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)icon;
- (id)actions;
- (id)initWithIconId:(id)arg1 type:(unsigned int)arg2 showType:(unsigned int)arg3 actions:(id)arg4 flags:(unsigned long long)arg5;
- (id)initWithIconId:(id)arg1 type:(unsigned int)arg2 actions:(id)arg3;
- (id)initWithIcon:(id)arg1;
- (id)getPBPropertyTable;
@property(nonatomic, readonly) _Bool isDNDMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

