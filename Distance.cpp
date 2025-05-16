#include<iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;
public:
    void inputDistance()
    {
        cout << "Enter Feet :- ";
        cin >> feet;
        cout << "Enter Inches :- ";
        cin >> inches;
    }
    Distance addDistance(Distance d2)
    {
        Distance result;
        result.feet = feet + d2.feet;
        result.inches = inches + d2.inches;
        if (result.inches >= 12)
        {
            result.feet += result.inches / 12;
            result.inches = result.inches % 12;
        }
        return result;
    }
    void displayDistance()
    {
        cout << feet << " Feet ," << inches << " Inches" << endl;
    }
};

int main()
{
    Distance d1;
    Distance d2;
    
    cout << endl << "First Distance :- " << endl;
    d1.inputDistance();
    cout << endl << "Second Distance :- " << endl;
    d2.inputDistance();
    Distance result = d1.addDistance(d2);
    cout << endl << "Total Distance Is :- " << endl;
    result.displayDistance();
    return 0;
}

Days 1-5: Research and Planning
Day 1-2: Choose a Business Model
Decide on digital products (eBooks, templates) as your primary focus.
Day 3-4: Define Your Niche
Use Google Trends and AnswerThePublic to identify a niche within personal finance, such as budgeting for students or freelancers.
Day 5: Plan Your Product
Outline the structure of your digital product (e.g., an eBook on budgeting tips).
Days 6-10: Product Creation
Day 6-7: Content Creation
Use AI tools like ChatGPT to assist in writing your eBook content.
Day 8-9: Design Your Product
Utilize Canva to design a professional-looking eBook cover and layout.
Day 10: Finalize Your Product
Review and edit your eBook for clarity and accuracy.
Days 11-15: Setting Up Your Sales Funnel
Day 11: Create a Landing Page
Use Carrd to design a free landing page for your eBook.
Day 12: Write Compelling Copy
Craft a headline and description that highlight the benefits of your eBook.
Day 13: Add a Call-to-Action
Include a clear CTA encouraging visitors to download your eBook.
Day 14: Set Up Payment Gateway
Use Gumroad to sell your eBook, as it offers a free plan for creators.
Day 15: Test Your Funnel
Ensure your landing page and payment process are functioning smoothly.
Days 16-20: Marketing Setup
Day 16: Establish Social Media Presence
Create accounts on platforms like Twitter or Instagram to promote your eBook.
Day 17: Plan Your Content Strategy
Decide on the type of content (tips, infographics) and frequency of posts.
Day 18: Start Content Marketing
Begin writing blog posts on Medium or WordPress, using SEO techniques to attract traffic.
Day 19: Set Up Email Marketing
Create a Mailchimp account and design a lead magnet (e.g., budgeting checklist).
Day 20: Automate Social Media
Use Hootsuite to schedule social media posts in advance.
Days 21-25: Launch and Promotion
Day 21: Launch Your Product
Announce the availability of your eBook on your blog and social media channels.
Day 22: Engage with Your Audience
Respond to comments and messages to build a community around your product.
Day 23: Promote Your Lead Magnet
Share your lead magnet widely to grow your email list.
Day 24: Send Email Sequences
Use Mailchimp to send automated email sequences introducing your eBook.
Day 25: Monitor Initial Results
Check analytics to see traffic and conversion rates.
Days 26-30: Optimization and Scaling
Day 26: Analyze Performance
Use Google Analytics to understand which content is driving traffic and sales.
Day 27: Optimize Your Funnel
Conduct A/B testing on landing pages and email subject lines to improve conversions.
Day 28: Leverage AI for Content
Use AI tools to generate more content for your blog and social media.
Day 29: Plan for Scaling
Consider creating additional products or exploring affiliate marketing opportunities.
Day 30: Review and Adjust
Evaluate your progress, adjust strategies as needed, and plan for future growth.