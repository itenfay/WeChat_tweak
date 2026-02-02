//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol TPAssetResourceLoadingContentInformationRequestDelegate;

@interface TPAssetResourceLoadingContentInformationRequest : NSObject
{
    _Bool _usePollingMode;
    NSString *_contentType;
    unsigned long long _contentLength;
    NSString *_dataReadFilePath;
    id <TPAssetResourceLoadingContentInformationRequestDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TPAssetResourceLoadingContentInformationRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool usePollingMode; // @synthesize usePollingMode=_usePollingMode;
@property(copy, nonatomic) NSString *dataReadFilePath; // @synthesize dataReadFilePath=_dataReadFilePath;
@property(nonatomic) unsigned long long contentLength; // @synthesize contentLength=_contentLength;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
- (void)setInformationRequestDelegate:(id)arg1;

@end

