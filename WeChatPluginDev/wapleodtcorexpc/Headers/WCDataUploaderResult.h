//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCDataUploaderResult : NSObject
{
    long long _uploadRetcode;
    long long _uploadErrType;
    NSString *_uploadErrMsg;
    NSArray *_uploadErrTogetherUsernames;
    NSString *_uploadErrBtnUrl;
    NSString *_uploadErrBtnTitle;
    long long _uploadErrSnsTipsCode;
}

- (void).cxx_destruct;
@property(nonatomic) long long uploadErrSnsTipsCode; // @synthesize uploadErrSnsTipsCode=_uploadErrSnsTipsCode;
@property(copy, nonatomic) NSString *uploadErrBtnTitle; // @synthesize uploadErrBtnTitle=_uploadErrBtnTitle;
@property(copy, nonatomic) NSString *uploadErrBtnUrl; // @synthesize uploadErrBtnUrl=_uploadErrBtnUrl;
@property(copy, nonatomic) NSArray *uploadErrTogetherUsernames; // @synthesize uploadErrTogetherUsernames=_uploadErrTogetherUsernames;
@property(copy, nonatomic) NSString *uploadErrMsg; // @synthesize uploadErrMsg=_uploadErrMsg;
@property(nonatomic) long long uploadErrType; // @synthesize uploadErrType=_uploadErrType;
@property(nonatomic) long long uploadRetcode; // @synthesize uploadRetcode=_uploadRetcode;
- (id)description;

@end

