//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WAShareAppMessageInnerPermanentModel : NSObject
{
    _Bool _shouldUseUpdatableShare;
    _Bool _isToDoMessage;
    _Bool _isPrivateMessage;
    _Bool _bInSharing;
    NSString *_updatableShareTemplateId;
    NSString *_toDoActivityId;
    NSArray *_participant;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *participant; // @synthesize participant=_participant;
@property(nonatomic) _Bool bInSharing; // @synthesize bInSharing=_bInSharing;
@property(nonatomic) _Bool isPrivateMessage; // @synthesize isPrivateMessage=_isPrivateMessage;
@property(copy, nonatomic) NSString *toDoActivityId; // @synthesize toDoActivityId=_toDoActivityId;
@property(nonatomic) _Bool isToDoMessage; // @synthesize isToDoMessage=_isToDoMessage;
@property(retain, nonatomic) NSString *updatableShareTemplateId; // @synthesize updatableShareTemplateId=_updatableShareTemplateId;
@property(nonatomic) _Bool shouldUseUpdatableShare; // @synthesize shouldUseUpdatableShare=_shouldUseUpdatableShare;

@end

