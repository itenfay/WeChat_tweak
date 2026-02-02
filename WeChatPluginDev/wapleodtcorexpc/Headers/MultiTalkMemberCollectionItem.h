//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MultiTalkMemberCell;
@protocol MultiTalkMemberProtocol;

@interface MultiTalkMemberCollectionItem : NSObject
{
    NSObject<MultiTalkMemberProtocol> *_member;
    MultiTalkMemberCell *_memberCell;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MultiTalkMemberCell *memberCell; // @synthesize memberCell=_memberCell;
@property(retain, nonatomic) NSObject<MultiTalkMemberProtocol> *member; // @synthesize member=_member;
- (id)initWithMember:(id)arg1 memberCell:(id)arg2;

@end

