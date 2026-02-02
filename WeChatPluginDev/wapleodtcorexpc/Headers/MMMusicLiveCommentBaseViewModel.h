//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLocation, MMMusicLiveBaseMsg, NSString;
@protocol MMMusicLiveCommentBaseViewModelDelegate;

@interface MMMusicLiveCommentBaseViewModel : NSObject
{
    int _type;
    id <MMMusicLiveCommentBaseViewModelDelegate> _delegate;
    unsigned long long _uniqueId;
    NSString *_username;
    NSString *_headUrl;
    NSString *_content;
    MMMusicLiveBaseMsg *_msg;
    FinderLocation *_location;
}

+ (id)modelWithPopMsg:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderLocation *location; // @synthesize location=_location;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) MMMusicLiveBaseMsg *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) unsigned long long uniqueId; // @synthesize uniqueId=_uniqueId;
@property(nonatomic) __weak id <MMMusicLiveCommentBaseViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)commitUpdate;

@end

