//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface MJTransitionItem : NSObject
{
    unsigned long long _status;
    NSString *_transitionID;
    NSString *_transitionName;
    NSURL *_previewImageURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *previewImageURL; // @synthesize previewImageURL=_previewImageURL;
@property(retain, nonatomic) NSString *transitionName; // @synthesize transitionName=_transitionName;
@property(retain, nonatomic) NSString *transitionID; // @synthesize transitionID=_transitionID;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)updateStatus:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 transitionName:(id)arg2 previewImageURL:(id)arg3 status:(unsigned long long)arg4;
- (id)initWithMaterial:(id)arg1;

@end

