//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIFont;

@interface WCFinderUserRelationshipModel : NSObject
{
    _Bool _canShowFollowed;
    _Bool _canShowMyFollow;
    _Bool _canShowMemberFollowed;
    _Bool _canShowAuthor;
    unsigned int _interactionCount;
    unsigned int _orderCount;
    unsigned long long _style;
    NSString *_customText;
    UIFont *_tagLabelFont;
    NSString *_poiInteractionLabel;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *poiInteractionLabel; // @synthesize poiInteractionLabel=_poiInteractionLabel;
@property(retain, nonatomic) UIFont *tagLabelFont; // @synthesize tagLabelFont=_tagLabelFont;
@property(nonatomic) _Bool canShowAuthor; // @synthesize canShowAuthor=_canShowAuthor;
@property(copy, nonatomic) NSString *customText; // @synthesize customText=_customText;
@property(nonatomic) unsigned int orderCount; // @synthesize orderCount=_orderCount;
@property(nonatomic) unsigned int interactionCount; // @synthesize interactionCount=_interactionCount;
@property(nonatomic) _Bool canShowMemberFollowed; // @synthesize canShowMemberFollowed=_canShowMemberFollowed;
@property(nonatomic) _Bool canShowMyFollow; // @synthesize canShowMyFollow=_canShowMyFollow;
@property(nonatomic) _Bool canShowFollowed; // @synthesize canShowFollowed=_canShowFollowed;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;

@end

