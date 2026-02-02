//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfoAttachment, NSString, WCFinderVideoAttachment;

@interface WCFinderAttachment : NSObject
{
    int _type;
    WCFinderVideoAttachment *_videoAttachment;
    FinderJumpInfoAttachment *_jumpInfoAttachment;
}

+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_jumpInfoAttachment;
+ (void)PBArrayAdd_videoAttachment;
+ (void)PBArrayAdd_type;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderJumpInfoAttachment *jumpInfoAttachment; // @synthesize jumpInfoAttachment=_jumpInfoAttachment;
@property(retain, nonatomic) WCFinderVideoAttachment *videoAttachment; // @synthesize videoAttachment=_videoAttachment;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)genFinderJupmInfo;
- (id)genFinderAttachment;
@property(readonly, copy) NSString *description;
- (id)initWithFinderAttachment:(id)arg1;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

