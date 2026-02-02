//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCFinderNetPagViewDelegate;

@interface WCFinderNetPagView
{
    _Bool _disableAutoUpate;
    id <WCFinderNetPagViewDelegate> _delegate;
    NSString *_defaultPagResPath;
    NSString *_netPagUrl;
    NSString *_targetMd5;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *targetMd5; // @synthesize targetMd5=_targetMd5;
@property(copy, nonatomic) NSString *netPagUrl; // @synthesize netPagUrl=_netPagUrl;
@property(copy, nonatomic) NSString *defaultPagResPath; // @synthesize defaultPagResPath=_defaultPagResPath;
@property(nonatomic) _Bool disableAutoUpate; // @synthesize disableAutoUpate=_disableAutoUpate;
@property(nonatomic) __weak id <WCFinderNetPagViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)loadFileWithPath:(id)arg1;
- (void)updateWithDefaultPagResPath:(id)arg1 netPagURL:(id)arg2 targetMd5:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

