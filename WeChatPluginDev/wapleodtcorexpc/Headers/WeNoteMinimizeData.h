//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WeNoteMinimizeData : NSObject
{
    _Bool _bEditable;
    unsigned int _mesLocalID;
    unsigned int _favLocalId;
    unsigned int _version;
    NSString *_chatUser;
    NSString *_timeLineId;
    NSString *_localDataId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) _Bool bEditable; // @synthesize bEditable=_bEditable;
@property(retain, nonatomic) NSString *localDataId; // @synthesize localDataId=_localDataId;
@property(retain, nonatomic) NSString *timeLineId; // @synthesize timeLineId=_timeLineId;
@property(nonatomic) unsigned int favLocalId; // @synthesize favLocalId=_favLocalId;
@property(nonatomic) unsigned int mesLocalID; // @synthesize mesLocalID=_mesLocalID;
@property(retain, nonatomic) NSString *chatUser; // @synthesize chatUser=_chatUser;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

